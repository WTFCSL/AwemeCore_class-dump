//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInteractPureRTCstreamConfig : NSObject {
    BOOL _autoPublishStream;
    BOOL _enableVAD;
    BOOL _autoSubscribeAudioAfterRemoteUserJoin;
    BOOL _autoSubscribeVideoAfterRemoteUserJoin;
    long long _type;
    NSString *_rtcAppID;
    NSString *_rtcToken;
    NSString *_rtcBusinessID;
    NSString *_rtcUserID;
    NSString *_rtcRoomID;
    NSString *_rtcSignKey;
    NSString *_forceGlobalApiServer;
    long long _rtcVendor;
    NSString *_appID;
    NSString *_appVersion;
    NSString *_deviceID;
    long long _env;
    NSString *_abTestConfig;
    NSString *_publicStreamID;
    long long _volumeCallbackInterval;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *rtcAppID;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcBusinessID;
@property (copy, nonatomic) NSString *rtcUserID;
@property (copy, nonatomic) NSString *rtcRoomID;
@property (copy, nonatomic) NSString *rtcSignKey;
@property (copy, nonatomic) NSString *forceGlobalApiServer;
@property (nonatomic) long long rtcVendor;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceID;
@property (nonatomic) long long env;
@property (copy, nonatomic) NSString *abTestConfig;
@property (copy, nonatomic) NSString *publicStreamID;
@property (nonatomic) BOOL autoPublishStream;
@property (nonatomic) BOOL enableVAD;
@property (nonatomic) long long volumeCallbackInterval;
@property (nonatomic) BOOL autoSubscribeAudioAfterRemoteUserJoin;
@property (nonatomic) BOOL autoSubscribeVideoAfterRemoteUserJoin;

- (long long)env;
- (void)setEnv:(long long)arg0;
- (id)abTestConfig;
- (id)rtcToken;
- (id)rtcAppID;
- (void)setRtcAppID:(id)arg0;
- (void)setRtcBusinessID:(id)arg0;
- (id)rtcBusinessID;
- (void)setAbTestConfig:(id)arg0;
- (id)rtcRoomID;
- (id)rtcUserID;
- (id)initWithRTCExtInfoString:(id)arg0;
- (void)setPublicStreamID:(id)arg0;
- (void)setAutoPublishStream:(BOOL)arg0;
- (void)setVolumeCallbackInterval:(long long)arg0;
- (void)setAutoSubscribeAudioAfterRemoteUserJoin:(BOOL)arg0;
- (void)setAutoSubscribeVideoAfterRemoteUserJoin:(BOOL)arg0;
- (long long)volumeCallbackInterval;
- (BOOL)autoPublishStream;
- (BOOL)autoSubscribeAudioAfterRemoteUserJoin;
- (BOOL)autoSubscribeVideoAfterRemoteUserJoin;
- (id)publicStreamID;
- (void)setForceGlobalApiServer:(id)arg0;
- (id)forceGlobalApiServer;
- (void)setRtcUserID:(id)arg0;
- (void)setupWithRTCExtInfoString:(id)arg0;
- (void)setRtcToken:(id)arg0;
- (void)setRtcSignKey:(id)arg0;
- (void)setRtcRoomID:(id)arg0;
- (id)rtcSignKey;
- (long long)rtcVendor;
- (void)setRtcVendor:(long long)arg0;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (long long)type;
- (id)appVersion;
- (void)setType:(long long)arg0;
- (id)appID;
- (BOOL)enableVAD;
- (void)setEnableVAD:(BOOL)arg0;

@end
